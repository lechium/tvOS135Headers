/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIRemoteTextEditingAttributes, NSString;

@interface UIRemoteTextEditingSession : NSObject {

	UIRemoteTextEditingAttributes* _attributes;
	NSString* _text;

}

@property (nonatomic,copy) UIRemoteTextEditingAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSString * text;                                         //@synthesize text=_text - In the implementation block
-(UIRemoteTextEditingAttributes *)attributes;
-(void)setAttributes:(UIRemoteTextEditingAttributes *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
@end

