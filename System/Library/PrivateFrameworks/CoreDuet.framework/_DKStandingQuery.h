/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol _DKStandingQuery
@property (nonatomic,retain) NSString * queryIdentifier; 
@property (nonatomic,retain) NSObject*<OS_xpc_object> activity; 
@required
-(NSObject*<OS_xpc_object>)activity;
-(void)setActivity:(id)arg1;
-(void)setQueryIdentifier:(id)arg1;
-(NSString *)queryIdentifier;
-(id)fetchResult;
-(void)executeWithStorage:(id)arg1;

@end

