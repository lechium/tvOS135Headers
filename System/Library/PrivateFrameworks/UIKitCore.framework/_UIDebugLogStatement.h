/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _UIDebugLogStatement : NSObject {

	long long _type;
	unsigned long long _indentLevel;
	NSString* _prefix;
	NSString* _text;

}

@property (assign,nonatomic) long long type;                              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long indentLevel;              //@synthesize indentLevel=_indentLevel - In the implementation block
@property (nonatomic,copy) NSString * prefix;                             //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,copy) NSString * text;                               //@synthesize text=_text - In the implementation block
-(id)init;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(unsigned long long)indentLevel;
-(void)setIndentLevel:(unsigned long long)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
@end

