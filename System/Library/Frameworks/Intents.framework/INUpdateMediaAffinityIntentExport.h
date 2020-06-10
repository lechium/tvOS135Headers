/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, INMediaSearch;


@protocol INUpdateMediaAffinityIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * mediaItems; 
@property (nonatomic,copy) INMediaSearch * mediaSearch; 
@property (assign,nonatomic) long long affinityType; 
@required
-(id)init;
-(NSArray *)mediaItems;
-(void)setMediaItems:(id)arg1;
-(INMediaSearch *)mediaSearch;
-(void)setMediaSearch:(id)arg1;
-(long long)affinityType;
-(void)setAffinityType:(long long)arg1;

@end

