/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAttributedString, NSArray, NSMutableAttributedString;

@interface _MKMultiPartLabelMetrics : NSObject {

	NSAttributedString* _originalAttributedString;
	NSArray* _separators;
	NSArray* _components;
	NSMutableAttributedString* _attributedString;
	unsigned long long _currentSeparatorIndex;

}

@property (nonatomic,copy,readonly) NSAttributedString * originalAttributedString;              //@synthesize originalAttributedString=_originalAttributedString - In the implementation block
@property (nonatomic,copy,readonly) NSArray * separators;                                       //@synthesize separators=_separators - In the implementation block
@property (nonatomic,copy,readonly) NSArray * components;                                       //@synthesize components=_components - In the implementation block
@property (nonatomic,readonly) NSMutableAttributedString * attributedString;                    //@synthesize attributedString=_attributedString - In the implementation block
@property (assign,nonatomic) unsigned long long currentSeparatorIndex;                          //@synthesize currentSeparatorIndex=_currentSeparatorIndex - In the implementation block
-(NSArray *)components;
-(void)reset;
-(NSArray *)separators;
-(NSMutableAttributedString *)attributedString;
-(id)initWithMultiPartString:(id)arg1 ;
-(NSAttributedString *)originalAttributedString;
-(void)setCurrentSeparatorIndex:(unsigned long long)arg1 ;
-(unsigned long long)currentSeparatorIndex;
-(BOOL)replaceSeparatorAtIndex:(unsigned long long)arg1 withString:(id)arg2 ;
-(BOOL)_shiftLocationOfStrings:(id)arg1 startingAtIndex:(unsigned long long)arg2 shiftValue:(long long)arg3 ;
@end

