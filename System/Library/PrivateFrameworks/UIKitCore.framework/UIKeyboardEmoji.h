/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UIKeyboardEmoji : NSObject {

	NSString* _emojiString;
	unsigned long long _variantMask;

}

@property (nonatomic,retain) NSString * emojiString;              //@synthesize emojiString=_emojiString - In the implementation block
@property (assign) unsigned long long variantMask;                //@synthesize variantMask=_variantMask - In the implementation block
+(id)emojiWithString:(id)arg1 withVariantMask:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)key;
-(id)initWithString:(id)arg1 withVariantMask:(unsigned long long)arg2 ;
-(NSString *)emojiString;
-(void)setEmojiString:(NSString *)arg1 ;
-(unsigned long long)variantMask;
-(void)setVariantMask:(unsigned long long)arg1 ;
@end

