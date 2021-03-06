/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMethodSignature, NSDictionary;

@interface _NADelegateMethodMetadata : NSObject {

	NSMethodSignature* _methodSignature;
	/*^block*/id _customHandler;
	NSDictionary* _customLogSettingsByArgumentIndex;

}

@property (nonatomic,retain) NSMethodSignature * methodSignature;                        //@synthesize methodSignature=_methodSignature - In the implementation block
@property (nonatomic,copy) id customHandler;                                             //@synthesize customHandler=_customHandler - In the implementation block
@property (nonatomic,copy) NSDictionary * customLogSettingsByArgumentIndex;              //@synthesize customLogSettingsByArgumentIndex=_customLogSettingsByArgumentIndex - In the implementation block
-(NSMethodSignature *)methodSignature;
-(void)setMethodSignature:(NSMethodSignature *)arg1 ;
-(id)customHandler;
-(void)setCustomHandler:(id)arg1 ;
-(NSDictionary *)customLogSettingsByArgumentIndex;
-(void)setCustomLogSettingsByArgumentIndex:(NSDictionary *)arg1 ;
@end

