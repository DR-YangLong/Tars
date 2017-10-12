/**
 * Tencent is pleased to support the open source community by making Tars available.
 *
 * Copyright (C) 2016THL A29 Limited, a Tencent company. All rights reserved.
 *
 * Licensed under the BSD 3-Clause License (the "License"); you may not use this file except 
 * in compliance with the License. You may obtain a copy of the License at
 *
 * https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software distributed 
 * under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR 
 * CONDITIONS OF ANY KIND, either express or implied. See the License for the 
 * specific language governing permissions and limitations under the License.
 */

// **********************************************************************
// This file was generated by a TARS parser!
// TARS version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/tars/upload/renjunyi/MTT.tars'
// **********************************************************************

#import "TarsObjectV2.h"

@interface MttPluginInfoNew : TarsObjectV2

@property (nonatomic, retain, JV2_PROP_GS_V2(sID,setSID:)) NSString* JV2_PROP_NM(r,0,sID);
@property (nonatomic, retain, JV2_PROP_GS_V2(sVersion,setSVersion:)) NSString* JV2_PROP_NM(r,1,sVersion);
@property (nonatomic, retain, JV2_PROP_GS_V2(sType,setSType:)) NSString* JV2_PROP_NM(r,2,sType);
@property (nonatomic, retain, JV2_PROP_GS_V2(sName,setSName:)) NSString* JV2_PROP_NM(r,3,sName);
@property (nonatomic, retain, JV2_PROP_GS_V2(sDllName,setSDllName:)) NSString* JV2_PROP_NM(r,4,sDllName);
@property (nonatomic, retain, JV2_PROP_GS_V2(sDescription,setSDescription:)) NSString* JV2_PROP_NM(o,5,sDescription);
@property (nonatomic, retain, JV2_PROP_GS_V2(sCreator,setSCreator:)) NSString* JV2_PROP_NM(o,6,sCreator);
@property (nonatomic, retain, JV2_PROP_GS_V2(sDownloadUrl,setSDownloadUrl:)) NSString* JV2_PROP_NM(o,7,sDownloadUrl);
@property (nonatomic, retain, JV2_PROP_GS_V2(sHomepageUrl,setSHomepageUrl:)) NSString* JV2_PROP_NM(o,8,sHomepageUrl);
@property (nonatomic, retain, JV2_PROP_GS_V2(sUpdatepageUrl,setSUpdatepageUrl:)) NSString* JV2_PROP_NM(o,9,sUpdatepageUrl);
@property (nonatomic, retain, JV2_PROP_GS_V2(sIconUrl,setSIconUrl:)) NSString* JV2_PROP_NM(o,10,sIconUrl);
@property (nonatomic, assign, JV2_PROP_GS_V2(bBootLoad,setBBootLoad:)) TarsBool JV2_PROP_NM(o,11,bBootLoad);
@property (nonatomic, assign, JV2_PROP_GS_V2(iStatus,setIStatus:)) TarsInt8 JV2_PROP_NM(o,12,iStatus);
@property (nonatomic, retain, JV2_PROP_GS_V2(sTip,setSTip:)) NSString* JV2_PROP_NM(o,13,sTip);
@property (nonatomic, assign, JV2_PROP_GS_V2(iFileSize,setIFileSize:)) TarsUInt64 JV2_PROP_NM(o,14,iFileSize);

@end
