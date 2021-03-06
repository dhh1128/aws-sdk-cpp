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
#include <aws/codedeploy/model/RegistrationStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Registered_HASH = HashingUtils::HashString("Registered");
static const int Deregistered_HASH = HashingUtils::HashString("Deregistered");

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{
namespace RegistrationStatusMapper
{
RegistrationStatus GetRegistrationStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == Registered_HASH)
  {
    return RegistrationStatus::Registered;
  }
  else if (hashCode == Deregistered_HASH)
  {
    return RegistrationStatus::Deregistered;
  }

  return RegistrationStatus::NOT_SET;
}

Aws::String GetNameForRegistrationStatus(RegistrationStatus value)
{
  switch(value)
  {
  case RegistrationStatus::Registered:
    return "Registered";
  case RegistrationStatus::Deregistered:
    return "Deregistered";
  default:
    return "";
  }
}

} // namespace RegistrationStatusMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
