/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REImage.h>

@class NSData;

@interface REDataImage : REImage {

	NSData* _data;
	double _scale;

}

@property (nonatomic,copy,readonly) NSData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) double scale;                    //@synthesize scale=_scale - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(double)scale;
-(id)initWithData:(id)arg1 scale:(double)arg2 ;
@end

