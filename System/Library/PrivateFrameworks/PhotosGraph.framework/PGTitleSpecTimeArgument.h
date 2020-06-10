/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGTitleSpecArgument.h>

@interface PGTitleSpecTimeArgument : PGTitleSpecArgument {

	unsigned long long _type;

}

@property (readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)argumentWithTimeType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)_resolvedStringWithMomentNodes:(id)arg1 ;
-(id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2 ;
-(id)_birthdayTitleWithMomentNodes:(id)arg1 ;
-(id)initWithTimeType:(unsigned long long)arg1 ;
-(id)_yearsAgoTitle;
-(id)_anniversaryTitleWithMomentNodes:(id)arg1 ;
-(id)_yearsAgoStringWithEventNodes:(id)arg1 relativeToDateComponents:(id)arg2 ;
-(id)_holidayTitleWithMomentNodes:(id)arg1 ;
@end

