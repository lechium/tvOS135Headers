/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSImpression.h>

@protocol IKJSImpression <JSExport>
@end

#import <libobjc.A.dylib/_IKJSImpressionProxy.h>

@class NSString, NSMutableArray;

@interface IKJSImpression : IKJSObject <NSObject, IKJSImpression, _IKJSImpressionProxy> {

	IKJSImpression* _parentImpression;
	NSString* _metricsTag;
	NSString* _metricsData;
	NSMutableArray* _mutableTimestamps;
	NSMutableArray* _mutableChildren;
	long long _indexInParent;

}

@property (nonatomic,copy) NSString * metricsTag;                                   //@synthesize metricsTag=_metricsTag - In the implementation block
@property (nonatomic,copy) NSString * metricsData;                                  //@synthesize metricsData=_metricsData - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableTimestamps;                    //@synthesize mutableTimestamps=_mutableTimestamps - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableChildren;                      //@synthesize mutableChildren=_mutableChildren - In the implementation block
@property (assign,nonatomic,__weak) IKJSImpression * parentImpression;              //@synthesize parentImpression=_parentImpression - In the implementation block
@property (assign,nonatomic) long long indexInParent;                               //@synthesize indexInParent=_indexInParent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)impressionsMapForViewElements:(id)arg1 appContext:(id)arg2 timestamp:(long long)arg3 existingImpressionsMap:(id)arg4 ;
+(id)impressionsMapForViewElements:(id)arg1 appContext:(id)arg2 timestamp:(long long)arg3 ;
-(NSString *)description;
-(void)addChild:(id)arg1 ;
-(id)parent;
-(id)data;
-(id)children;
-(long long)index;
-(id)timestamps;
-(IKJSImpression *)parentImpression;
-(void)linkReferences;
-(id)impressionQueueTag;
-(id)initWithAppContext:(id)arg1 data:(id)arg2 index:(unsigned long long)arg3 queueTag:(id)arg4 ;
-(void)addTimestamp:(long long)arg1 ;
-(NSMutableArray *)mutableTimestamps;
-(NSMutableArray *)mutableChildren;
-(NSString *)metricsTag;
-(NSString *)metricsData;
-(long long)indexInParent;
-(void)setMutableTimestamps:(NSMutableArray *)arg1 ;
-(void)setMutableChildren:(NSMutableArray *)arg1 ;
-(void)setParentImpression:(IKJSImpression *)arg1 ;
-(id)asPrivateIKJSImpression;
-(void)setMetricsTag:(NSString *)arg1 ;
-(void)setMetricsData:(NSString *)arg1 ;
-(void)setIndexInParent:(long long)arg1 ;
@end

