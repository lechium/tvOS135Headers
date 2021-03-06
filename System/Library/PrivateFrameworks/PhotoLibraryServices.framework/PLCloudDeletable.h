/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PLCloudDeletable <NSObject>
@property (assign,nonatomic) short cloudDeleteState; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
@required
+(long long)cloudDeletionTypeForTombstone:(id)arg1;
+(id)cloudUUIDKeyForDeletion;
-(long long)cloudDeletionType;
-(short)cloudDeleteState;
-(void)setCloudDeleteState:(short)arg1;
-(NSString *)cloudUUIDForDeletion;

@end

