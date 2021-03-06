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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/Tag.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeDeploy
{
namespace Model
{
  /*
    <p>Information about an on-premises instance.</p>
  */
  class AWS_CODEDEPLOY_API InstanceInfo
  {
  public:
    InstanceInfo();
    InstanceInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    InstanceInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /*
     <p>The name of the on-premises instance.</p>
    */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }

    /*
     <p>The name of the on-premises instance.</p>
    */
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    /*
     <p>The name of the on-premises instance.</p>
    */
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    /*
     <p>The name of the on-premises instance.</p>
    */
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }

    /*
     <p>The name of the on-premises instance.</p>
    */
    inline InstanceInfo& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}

    /*
     <p>The name of the on-premises instance.</p>
    */
    inline InstanceInfo& WithInstanceName(Aws::String&& value) { SetInstanceName(value); return *this;}

    /*
     <p>The name of the on-premises instance.</p>
    */
    inline InstanceInfo& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}

    /*
     <p>The IAM user ARN associated with the on-premises instance.</p>
    */
    inline const Aws::String& GetIamUserArn() const{ return m_iamUserArn; }

    /*
     <p>The IAM user ARN associated with the on-premises instance.</p>
    */
    inline void SetIamUserArn(const Aws::String& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = value; }

    /*
     <p>The IAM user ARN associated with the on-premises instance.</p>
    */
    inline void SetIamUserArn(Aws::String&& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = value; }

    /*
     <p>The IAM user ARN associated with the on-premises instance.</p>
    */
    inline void SetIamUserArn(const char* value) { m_iamUserArnHasBeenSet = true; m_iamUserArn.assign(value); }

    /*
     <p>The IAM user ARN associated with the on-premises instance.</p>
    */
    inline InstanceInfo& WithIamUserArn(const Aws::String& value) { SetIamUserArn(value); return *this;}

    /*
     <p>The IAM user ARN associated with the on-premises instance.</p>
    */
    inline InstanceInfo& WithIamUserArn(Aws::String&& value) { SetIamUserArn(value); return *this;}

    /*
     <p>The IAM user ARN associated with the on-premises instance.</p>
    */
    inline InstanceInfo& WithIamUserArn(const char* value) { SetIamUserArn(value); return *this;}

    /*
     <p>The ARN of the on-premises instance.</p>
    */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }

    /*
     <p>The ARN of the on-premises instance.</p>
    */
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }

    /*
     <p>The ARN of the on-premises instance.</p>
    */
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }

    /*
     <p>The ARN of the on-premises instance.</p>
    */
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }

    /*
     <p>The ARN of the on-premises instance.</p>
    */
    inline InstanceInfo& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}

    /*
     <p>The ARN of the on-premises instance.</p>
    */
    inline InstanceInfo& WithInstanceArn(Aws::String&& value) { SetInstanceArn(value); return *this;}

    /*
     <p>The ARN of the on-premises instance.</p>
    */
    inline InstanceInfo& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}

    /*
     <p>The time that the on-premises instance was registered.</p>
    */
    inline double GetRegisterTime() const{ return m_registerTime; }

    /*
     <p>The time that the on-premises instance was registered.</p>
    */
    inline void SetRegisterTime(double value) { m_registerTimeHasBeenSet = true; m_registerTime = value; }

    /*
     <p>The time that the on-premises instance was registered.</p>
    */
    inline InstanceInfo& WithRegisterTime(double value) { SetRegisterTime(value); return *this;}

    /*
     <p>If the on-premises instance was deregistered, the time that the on-premises instance was deregistered.</p>
    */
    inline double GetDeregisterTime() const{ return m_deregisterTime; }

    /*
     <p>If the on-premises instance was deregistered, the time that the on-premises instance was deregistered.</p>
    */
    inline void SetDeregisterTime(double value) { m_deregisterTimeHasBeenSet = true; m_deregisterTime = value; }

    /*
     <p>If the on-premises instance was deregistered, the time that the on-premises instance was deregistered.</p>
    */
    inline InstanceInfo& WithDeregisterTime(double value) { SetDeregisterTime(value); return *this;}

    /*
     <p>The tags that are currently associated with the on-premises instance.</p>
    */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /*
     <p>The tags that are currently associated with the on-premises instance.</p>
    */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /*
     <p>The tags that are currently associated with the on-premises instance.</p>
    */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /*
     <p>The tags that are currently associated with the on-premises instance.</p>
    */
    inline InstanceInfo& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /*
     <p>The tags that are currently associated with the on-premises instance.</p>
    */
    inline InstanceInfo& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /*
     <p>The tags that are currently associated with the on-premises instance.</p>
    */
    inline InstanceInfo& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /*
     <p>The tags that are currently associated with the on-premises instance.</p>
    */
    inline InstanceInfo& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet;
    Aws::String m_iamUserArn;
    bool m_iamUserArnHasBeenSet;
    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet;
    double m_registerTime;
    bool m_registerTimeHasBeenSet;
    double m_deregisterTime;
    bool m_deregisterTimeHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
