/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface UIDictationToken : NSObject <NSSecureCoding> {

	BOOL _removeSpaceBefore;
	BOOL _removeSpaceAfter;
	NSString* _text;

}

@property (nonatomic,copy) NSString * text;                        //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL removeSpaceBefore;               //@synthesize removeSpaceBefore=_removeSpaceBefore - In the implementation block
@property (nonatomic,readonly) BOOL removeSpaceAfter;              //@synthesize removeSpaceAfter=_removeSpaceAfter - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)removeSpaceAfter;
-(BOOL)removeSpaceBefore;
-(void)setRemoveSpaceBefore:(BOOL)arg1 ;
-(id)_descriptionExtra;
-(id)initWithText:(id)arg1 removeSpaceBefore:(BOOL)arg2 removeSpaceAfter:(BOOL)arg3 ;
@end

