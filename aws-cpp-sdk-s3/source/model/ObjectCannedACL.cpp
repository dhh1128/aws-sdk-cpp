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
#include <aws/s3/model/ObjectCannedACL.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int private__HASH = HashingUtils::HashString("private");
static const int public_read_HASH = HashingUtils::HashString("public-read");
static const int public_read_write_HASH = HashingUtils::HashString("public-read-write");
static const int authenticated_read_HASH = HashingUtils::HashString("authenticated-read");
static const int bucket_owner_read_HASH = HashingUtils::HashString("bucket-owner-read");
static const int bucket_owner_full_control_HASH = HashingUtils::HashString("bucket-owner-full-control");

namespace Aws
{
namespace S3
{
namespace Model
{
namespace ObjectCannedACLMapper
{
ObjectCannedACL GetObjectCannedACLForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == private__HASH)
  {
    return ObjectCannedACL::private_;
  }
  else if (hashCode == public_read_HASH)
  {
    return ObjectCannedACL::public_read;
  }
  else if (hashCode == public_read_write_HASH)
  {
    return ObjectCannedACL::public_read_write;
  }
  else if (hashCode == authenticated_read_HASH)
  {
    return ObjectCannedACL::authenticated_read;
  }
  else if (hashCode == bucket_owner_read_HASH)
  {
    return ObjectCannedACL::bucket_owner_read;
  }
  else if (hashCode == bucket_owner_full_control_HASH)
  {
    return ObjectCannedACL::bucket_owner_full_control;
  }

  return ObjectCannedACL::private_;
}

Aws::String GetNameForObjectCannedACL(ObjectCannedACL value)
{
  switch(value)
  {
  case ObjectCannedACL::private_:
    return "private";
  case ObjectCannedACL::public_read:
    return "public-read";
  case ObjectCannedACL::public_read_write:
    return "public-read-write";
  case ObjectCannedACL::authenticated_read:
    return "authenticated-read";
  case ObjectCannedACL::bucket_owner_read:
    return "bucket-owner-read";
  case ObjectCannedACL::bucket_owner_full_control:
    return "bucket-owner-full-control";
  default:
    return "private_";
  }
}

} // namespace ObjectCannedACLMapper
} // namespace Model
} // namespace S3
} // namespace Aws