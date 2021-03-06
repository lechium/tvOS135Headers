/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPPropertySet;

@interface MPStoreModelObjectBuilder : NSObject {

	BOOL _preventStoreItemMetadataCaching;
	MPPropertySet* _requestedPropertySet;

}

@property (nonatomic,readonly) MPPropertySet * requestedPropertySet;              //@synthesize requestedPropertySet=_requestedPropertySet - In the implementation block
@property (assign,nonatomic) BOOL preventStoreItemMetadataCaching;                //@synthesize preventStoreItemMetadataCaching=_preventStoreItemMetadataCaching - In the implementation block
+(id)allSupportedProperties;
-(id)initWithRequestedPropertySet:(id)arg1 ;
-(id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3 ;
-(MPPropertySet *)requestedPropertySet;
-(id)modelObjectWithStoreItemMetadata:(id)arg1 ;
-(id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 ;
-(id)modelObjectWithStorePlatformDictionary:(id)arg1 ;
-(id)modelObjectWithStoreItemMetadata:(id)arg1 userIdentity:(id)arg2 ;
-(id)modelObjectWithStorePlatformDictionary:(id)arg1 userIdentity:(id)arg2 ;
-(BOOL)preventStoreItemMetadataCaching;
-(void)setPreventStoreItemMetadataCaching:(BOOL)arg1 ;
@end

