/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, __NSHostExtraIvars, NSString;

@interface NSHost : NSObject {

	NSArray* names;
	NSArray* addresses;
	id reserved;

}

@property (nonatomic,retain) __NSHostExtraIvars * reserved; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSArray * names; 
@property (copy,readonly) NSString * address; 
@property (copy,readonly) NSArray * addresses; 
@property (copy,readonly) NSString * localizedName; 
+(id)currentHost;
+(id)hostWithName:(id)arg1 ;
+(id)hostWithAddress:(id)arg1 ;
+(BOOL)isHostCacheEnabled;
+(void)setHostCacheEnabled:(BOOL)arg1 ;
+(void)flushHostCache;
-(NSString *)name;
-(id)description;
-(void)dealloc;
-(__NSHostExtraIvars *)reserved;
-(NSArray *)names;
-(NSArray *)addresses;
-(id)initToResolve:(id)arg1 as:(int)arg2 ;
-(id)_thingToResolve;
-(void)resolve:(/*^block*/id)arg1 ;
-(void)blockingResolveUntil:(int)arg1 ;
-(void)__resolveWithFlags:(int)arg1 resultArray:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)resolveCurrentHostWithHandler:(/*^block*/id)arg1 ;
-(BOOL)isEqualToHost:(id)arg1 ;
-(NSString *)address;
-(NSString *)localizedName;
-(void)setReserved:(__NSHostExtraIvars *)arg1 ;
@end

