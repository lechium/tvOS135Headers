/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXMagazineRectArray : NSObject <NSCopying> {

	PXMagazineRect* _rects;
	unsigned long long _currentIndex;
	unsigned long long _size;
	double _score;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (assign,nonatomic) double score;                            //@synthesize score=_score - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(double)score;
-(void)setScore:(double)arg1 ;
-(id)initWithSize:(unsigned long long)arg1 ;
-(unsigned long long)rowsUsed;
-(void)addRect:(PXMagazineRect)arg1 ;
-(void)removeLastRect;
-(PXMagazineRect)rectAtIndex:(unsigned long long)arg1 ;
@end

