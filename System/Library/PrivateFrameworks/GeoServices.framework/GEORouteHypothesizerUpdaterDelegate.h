/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEORouteHypothesizerUpdaterDelegate <NSObject>
@optional
-(void)routeHypothesizerUpdater:(id)arg1 didChangeTravelState:(BOOL)arg2;
-(void)routeHypothesizerUpdaterDidArrive:(id)arg1;
-(void)routeHypothesizerUpdater:(id)arg1 faultedWithError:(id)arg2;

@required
-(void)routeHypothesizerUpdater:(id)arg1 willRequestNewRoute:(id)arg2;
-(void)routeHypothesizerUpdater:(id)arg1 receivedNewRoute:(id)arg2 request:(id)arg3 response:(id)arg4;

@end

