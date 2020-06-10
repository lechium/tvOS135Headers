/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxPlugDescriptor : NSObject {

	FxPlugDescriptorPriv* _priv;

}
+(id)fxPlugDescriptorWithPROPlugIn:(void*)arg1 ;
+(id)fxPlugDescriptorWithFxMetaPlug:(id)arg1 ;
-(void)dealloc;
-(id)properties;
-(id)version;
-(id)uuid;
-(id)displayName;
-(id)flavor;
-(Class)plugInClass;
-(id)initWithPROPlugIn:(void*)arg1 ;
-(id)initWithFxMetaPlug:(id)arg1 ;
-(id)plugInTypeUUID;
-(id)metaPlug;
-(id)groupDescriptor;
-(BOOL)canDoGPU;
-(BOOL)requiresCoreImage;
@end
