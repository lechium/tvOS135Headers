/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDate;

@interface MBDebugContext : NSObject {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) long long time; 
@property (nonatomic,retain) NSDate * simulatedDate; 
+(id)defaultDebugContext;
-(id)description;
-(id)init;
-(void)dealloc;
-(long long)time;
-(void)setFlag:(id)arg1 ;
-(NSDate *)simulatedDate;
-(id)valueForName:(id)arg1 ;
-(void)setValue:(id)arg1 forName:(id)arg2 ;
-(void)removeValueForName:(id)arg1 ;
-(void)setSimulatedDate:(NSDate *)arg1 ;
-(BOOL)isFlagSet:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forName:(id)arg2 ;
-(BOOL)boolForName:(id)arg1 ;
-(void)setInt:(int)arg1 forName:(id)arg2 ;
-(int)intForName:(id)arg1 ;
-(void)setDelegate:(id)arg1 andSelector:(SEL)arg2 forName:(id)arg3 ;
-(id)performSelectorForName:(id)arg1 ;
-(id)performSelectorForName:(id)arg1 withObject:(id)arg2 ;
-(BOOL)eval:(id)arg1 ;
@end

