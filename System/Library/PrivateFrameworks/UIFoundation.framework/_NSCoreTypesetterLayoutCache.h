/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@interface _NSCoreTypesetterLayoutCache : NSObject {

	unsigned long long _count;
	unsigned short* _glyphs;
	CGSize* _advances;
	double _elasticAdvances;
	CTFontRef _resolvedFont;
	long long _textAlignment;
	CTLineRef _line;

}

@property (nonatomic,retain) CTLineRef CTLine; 
-(void)dealloc;
-(CTLineRef)CTLine;
-(void)setCount:(unsigned long long)arg1 glyphs:(const unsigned short*)arg2 advances:(const CGSize*)arg3 elasticAdvances:(double)arg4 resolvedFont:(CTFontRef)arg5 textAlignment:(long long)arg6 ;
-(BOOL)getCount:(unsigned long long*)arg1 glyphs:(const unsigned short*)arg2 advances:(const CGSize*)arg3 elasticAdvances:(double*)arg4 resolvedFont:(const _CTFont*)arg5 textAlignment:(long long*)arg6 ;
-(void)setCTLine:(CTLineRef)arg1 ;
@end
