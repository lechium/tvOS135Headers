/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOTransitRouteUpdaterDelegate;
@class NSSet;

@interface GEOTransitRouteUpdater : NSObject {

	id<GEOTransitRouteUpdaterDelegate> _delegate;
	BOOL _active;
	NSSet* _requests;

}

@property (assign,nonatomic,__weak) id<GEOTransitRouteUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSSet * requests;                                                  //@synthesize requests=_requests - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                     //@synthesize active=_active - In the implementation block
-(void)dealloc;
-(id<GEOTransitRouteUpdaterDelegate>)delegate;
-(void)setDelegate:(id<GEOTransitRouteUpdaterDelegate>)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(NSSet *)requests;
-(id)initWithDelegate:(id)arg1 andInitialTTL:(double)arg2 ;
-(void)setRequests:(NSSet *)arg1 ;
@end
