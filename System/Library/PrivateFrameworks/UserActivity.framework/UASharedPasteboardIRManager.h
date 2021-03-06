/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface UASharedPasteboardIRManager : NSObject {

	NSMutableDictionary* _lookupTable;

}

@property (retain) NSMutableDictionary * lookupTable;              //@synthesize lookupTable=_lookupTable - In the implementation block
+(id)sharedIRManager;
-(id)init;
-(void)registerIRHandlerClass:(Class)arg1 forType:(id)arg2 ;
-(id)converterForType:(id)arg1 ;
-(void)initializeConverters;
-(id)registeredConverters;
-(void)setLookupTable:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)lookupTable;
@end

