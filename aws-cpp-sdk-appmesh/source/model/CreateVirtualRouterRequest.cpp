﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/appmesh/model/CreateVirtualRouterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppMesh::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateVirtualRouterRequest::CreateVirtualRouterRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_meshNameHasBeenSet(false),
    m_specHasBeenSet(false),
    m_virtualRouterNameHasBeenSet(false)
{
}

Aws::String CreateVirtualRouterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_specHasBeenSet)
  {
   payload.WithObject("spec", m_spec.Jsonize());

  }

  if(m_virtualRouterNameHasBeenSet)
  {
   payload.WithString("virtualRouterName", m_virtualRouterName);

  }

  return payload.View().WriteReadable();
}




