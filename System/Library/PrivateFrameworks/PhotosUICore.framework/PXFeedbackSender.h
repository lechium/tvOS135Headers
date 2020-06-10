/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PXFeedbackSender : NSObject {

	unsigned long long _feedbackType;
	BOOL _userLikedResults;

}
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)sendFeedback:(id)arg1 forFeedbackType:(unsigned long long)arg2 ;
-(void)sendFeedbackToServer:(id)arg1 ;
-(BOOL)sendFeedbackWithFeedbackEntryUUID:(id)arg1 ;
-(BOOL)sendPendingFeedbackToServer;
-(void)testTalkToServer;
-(id)generateFeedbackParamsStringForEntry:(id)arg1 ;
-(void)_sendFeedbackEntryToOSService:(id)arg1 ;
-(void)_incrementCounterForFeedbackValueKey:(id)arg1 ofEntry:(id)arg2 ;
-(void)_incrementCounterForMixedFeedbackValueKey:(id)arg1 ofEntry:(id)arg2 ;
-(void)_incrementAGGDCounterForFeedbackValueKey:(id)arg1 ofEntry:(id)arg2 ;
-(void)_incrementMessageTracerCounterForMixedFeedbackValueKey:(id)arg1 ofEntry:(id)arg2 ;
-(void)_incrementMessageTracerCounterForFeedbackValueKey:(id)arg1 ofEntry:(id)arg2 ;
@end

