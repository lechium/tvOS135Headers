/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface RTManagedObjectLocationProperties : NSObject {

	NSArray* _latitudePropertyPath;
	NSArray* _longitudePropertyPath;
	NSArray* _referenceFramePropertyPath;

}

@property (nonatomic,retain) NSArray * latitudePropertyPath;                    //@synthesize latitudePropertyPath=_latitudePropertyPath - In the implementation block
@property (nonatomic,retain) NSArray * longitudePropertyPath;                   //@synthesize longitudePropertyPath=_longitudePropertyPath - In the implementation block
@property (nonatomic,retain) NSArray * referenceFramePropertyPath;              //@synthesize referenceFramePropertyPath=_referenceFramePropertyPath - In the implementation block
-(id)initWithLatitudePropertyPath:(id)arg1 longitudePropertyPath:(id)arg2 referenceFramePropertyPath:(id)arg3 ;
-(NSArray *)latitudePropertyPath;
-(void)setLatitudePropertyPath:(NSArray *)arg1 ;
-(NSArray *)longitudePropertyPath;
-(void)setLongitudePropertyPath:(NSArray *)arg1 ;
-(NSArray *)referenceFramePropertyPath;
-(void)setReferenceFramePropertyPath:(NSArray *)arg1 ;
@end
