/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/s3/model/CopyObjectResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

CopyObjectResult::CopyObjectResult() : 
    m_lastModified(0.0)
{
}

CopyObjectResult::CopyObjectResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_lastModified(0.0)
{
  *this = result;
}

CopyObjectResult& CopyObjectResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode eTagNode = resultNode.FirstChild("ETag");
    if(eTagNode.IsNull())
    {
      eTagNode = resultNode;
    }

    if(!eTagNode.IsNull())
    {
      m_eTag = StringUtils::Trim(eTagNode.GetText().c_str());
    }
    XmlNode lastModifiedNode = resultNode.FirstChild("LastModified");
    if(lastModifiedNode.IsNull())
    {
      lastModifiedNode = resultNode;
    }

    if(!lastModifiedNode.IsNull())
    {
      m_lastModified = StringUtils::ConvertToDouble(StringUtils::Trim(lastModifiedNode.GetText().c_str()).c_str());
    }
  }

  return *this;
}
