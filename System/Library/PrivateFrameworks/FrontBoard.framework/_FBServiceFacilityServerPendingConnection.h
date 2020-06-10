/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSServiceFacility;

@interface _FBServiceFacilityServerPendingConnection : NSObject {

	FBSServiceFacility* _facility;
	/*^block*/id _completion;

}

@property (nonatomic,retain) FBSServiceFacility * facility;              //@synthesize facility=_facility - In the implementation block
@property (nonatomic,copy) id completion;                                //@synthesize completion=_completion - In the implementation block
+(id)pendingConnectionToFacility:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(FBSServiceFacility *)facility;
-(id)initWithFacility:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setFacility:(FBSServiceFacility *)arg1 ;
@end
