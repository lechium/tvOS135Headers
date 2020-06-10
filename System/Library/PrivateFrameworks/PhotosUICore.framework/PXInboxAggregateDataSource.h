/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXInboxModelDataSource.h>

@class NSDictionary;

@interface PXInboxAggregateDataSource : PXInboxModelDataSource {

	NSDictionary* _providerSourceDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * providerSourceDictionary;              //@synthesize providerSourceDictionary=_providerSourceDictionary - In the implementation block
-(id)initWithModels:(id)arg1 providerSourceDictionary:(id)arg2 ;
-(id)providerSourceForModel:(id)arg1 ;
-(NSDictionary *)providerSourceDictionary;
@end

