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
#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KMS
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_KMS_API ScheduleKeyDeletionResult
  {
  public:
    ScheduleKeyDeletionResult();
    ScheduleKeyDeletionResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ScheduleKeyDeletionResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }

    
    inline void SetKeyId(Aws::String&& value) { m_keyId = value; }

    
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }

    
    inline ScheduleKeyDeletionResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    
    inline ScheduleKeyDeletionResult& WithKeyId(Aws::String&& value) { SetKeyId(value); return *this;}

    
    inline ScheduleKeyDeletionResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}

    
    inline double GetDeletionDate() const{ return m_deletionDate; }

    
    inline void SetDeletionDate(double value) { m_deletionDate = value; }

    
    inline ScheduleKeyDeletionResult& WithDeletionDate(double value) { SetDeletionDate(value); return *this;}

  private:
    Aws::String m_keyId;
    double m_deletionDate;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
