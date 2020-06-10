/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHExternalAssetResource, NSURL, NSData;

@interface PHAssetResourceValidatedContext : NSObject {

	PHExternalAssetResource* _resource;
	NSURL* _validatedURL;
	NSData* _validatedData;

}

@property (nonatomic,readonly) PHExternalAssetResource * resource;              //@synthesize resource=_resource - In the implementation block
@property (nonatomic,readonly) NSURL * validatedURL;                            //@synthesize validatedURL=_validatedURL - In the implementation block
@property (nonatomic,readonly) NSData * validatedData;                          //@synthesize validatedData=_validatedData - In the implementation block
-(PHExternalAssetResource *)resource;
-(id)initWithResource:(id)arg1 validatedURL:(id)arg2 validatedData:(id)arg3 ;
-(NSURL *)validatedURL;
-(NSData *)validatedData;
@end

