/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface TIZhuyinPunctuationManager : NSObject

@property (readonly) NSDictionary * punctuationMap; 
+(id)shareZhuyinPunctuationManager;
-(NSDictionary *)punctuationMap;
-(id)candidatesFor:(id)arg1 ;
@end
