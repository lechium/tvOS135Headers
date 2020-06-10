/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPModelRequest.h>

@class MPCModelGenericAVItemTimedMetadataResponse, MPModelGenericObject, ICStoreRequestContext, NSArray;

@interface MPCModelGenericAVItemTimedMetadataRequest : MPModelRequest {

	MPCModelGenericAVItemTimedMetadataResponse* _previousResponse;
	MPModelGenericObject* _genericObject;
	ICStoreRequestContext* _storeRequestContext;
	NSArray* _timedMetadataGroups;

}

@property (nonatomic,retain) MPCModelGenericAVItemTimedMetadataResponse * previousResponse;              //@synthesize previousResponse=_previousResponse - In the implementation block
@property (nonatomic,readonly) MPModelGenericObject * genericObject;                                     //@synthesize genericObject=_genericObject - In the implementation block
@property (nonatomic,copy,readonly) ICStoreRequestContext * storeRequestContext;                         //@synthesize storeRequestContext=_storeRequestContext - In the implementation block
@property (nonatomic,copy,readonly) NSArray * timedMetadataGroups;                                       //@synthesize timedMetadataGroups=_timedMetadataGroups - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)metadataIdentifiers;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ICStoreRequestContext *)storeRequestContext;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPCModelGenericAVItemTimedMetadataResponse *)previousResponse;
-(void)setPreviousResponse:(MPCModelGenericAVItemTimedMetadataResponse *)arg1 ;
-(id)initWithGenericObject:(id)arg1 timedMetadataGroups:(id)arg2 storeRequestContext:(id)arg3 ;
-(MPModelGenericObject *)genericObject;
-(NSArray *)timedMetadataGroups;
@end

