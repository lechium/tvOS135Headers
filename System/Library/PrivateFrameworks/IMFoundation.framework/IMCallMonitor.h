/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@class CXCallObserver, NSDate, NSString;

@interface IMCallMonitor : NSObject <CXCallObserverDelegate> {

	CXCallObserver* _callCenter;
	BOOL _wasOnCall;
	NSDate* _lastCallDate;

}

@property (nonatomic,readonly) BOOL isOnCall; 
@property (nonatomic,retain,readonly) NSDate * dateLastCallEnded;              //@synthesize lastCallDate=_lastCallDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)isOnCall;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(NSDate *)dateLastCallEnded;
@end

