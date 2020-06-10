/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOServerFormattedString.h>

@protocol GEOServerConditionalString;
@class NSArray, NSString;

@interface MNTraceEventServerFormattedString : NSObject <GEOServerFormattedString> {

	NSArray* _formatStrings;
	NSArray* _formatTokens;
	NSArray* _separators;
	NSArray* _formatStyles;
	id<GEOServerConditionalString> _alternativeString;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * formatStrings;                                       //@synthesize formatStrings=_formatStrings - In the implementation block
@property (nonatomic,readonly) NSArray * formatTokens;                                        //@synthesize formatTokens=_formatTokens - In the implementation block
@property (nonatomic,readonly) NSArray * separators;                                          //@synthesize separators=_separators - In the implementation block
@property (nonatomic,readonly) NSArray * formatStyles;                                        //@synthesize formatStyles=_formatStyles - In the implementation block
@property (nonatomic,readonly) id<GEOServerConditionalString> alternativeString;              //@synthesize alternativeString=_alternativeString - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)formatStrings;
-(NSArray *)separators;
-(NSArray *)formatTokens;
-(id<GEOServerConditionalString>)alternativeString;
-(NSArray *)formatStyles;
-(id)initWithFormatStrings:(id)arg1 formatTokens:(id)arg2 separators:(id)arg3 ;
@end

