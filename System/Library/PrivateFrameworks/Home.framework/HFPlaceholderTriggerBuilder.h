/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFTriggerBuilder.h>

@interface HFPlaceholderTriggerBuilder : HFTriggerBuilder {

	BOOL _isEditing;

}

@property (assign,nonatomic) BOOL isEditing;              //@synthesize isEditing=_isEditing - In the implementation block
+(id)createPlaceholderTriggerForHome:(id)arg1 withTriggerActionSetBuilder:(id)arg2 context:(id)arg3 ;
-(BOOL)isEditing;
-(id)commitItem;
-(id)naturalLanguageNameOfType:(unsigned long long)arg1 ;
-(void)setIsEditing:(BOOL)arg1 ;
@end
