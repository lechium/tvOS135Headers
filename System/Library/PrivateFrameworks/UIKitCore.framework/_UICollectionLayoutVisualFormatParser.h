/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface _UICollectionLayoutVisualFormatParser : NSObject {

	NSString* _visualFormat;
	unsigned long long _axis;
	NSString* _name;
	NSArray* _items;

}

@property (assign,nonatomic) unsigned long long axis;              //@synthesize axis=_axis - In the implementation block
@property (nonatomic,copy) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * visualFormat;                //@synthesize visualFormat=_visualFormat - In the implementation block
@property (nonatomic,copy) NSArray * items;                        //@synthesize items=_items - In the implementation block
+(unsigned long long)axisForVisualFormat:(id)arg1 ;
+(id)parserWithVisualFormat:(id)arg1 ;
+(id)parsersWithVisualFormats:(id)arg1 seperatedByDelimiter:(id)arg2 ;
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)_parse;
-(unsigned long long)axis;
-(void)setAxis:(unsigned long long)arg1 ;
-(id)initWithVisualFormat:(id)arg1 ;
-(NSString *)visualFormat;
-(void)setVisualFormat:(NSString *)arg1 ;
@end

