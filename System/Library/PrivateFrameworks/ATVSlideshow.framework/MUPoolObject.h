/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@interface MUPoolObject : NSObject {

	MUPoolObject* mPoolPrev;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(SCD_Struct_MR15*)poolInfo;
+(void)clearAllPools;
+(BOOL)clearVars;
+(id)pooledClasses;
+(long long)clearPool;
-(oneway void)release;
-(void)purge;
@end

