/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TIHandwritingStrokes : NSObject <NSCopying, NSSecureCoding> {

	vector<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> >, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > >* _strokes;
	BOOL _continuePreviousStroke;

}
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)addPoint:(CGPoint)arg1 ;
-(void)endStroke;
-(void)removeStrokeAtIndex:(unsigned long long)arg1 ;
-(void)removeAllStrokes;
-(unsigned long long)numberOfStrokes;
-(unsigned long long)numberOfPointsInStrokeAtIndex:(unsigned long long)arg1 ;
-(CGPoint)pointAtIndex:(unsigned long long)arg1 inStrokeAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)totalNumberOfPoints;
@end

