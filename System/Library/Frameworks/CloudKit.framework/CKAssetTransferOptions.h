/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface CKAssetTransferOptions : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _sparseAware;
	NSNumber* _shouldFetchAssetContent;
	NSNumber* _shouldFetchAssetContentInMemory;
	NSNumber* _useMMCSEncryptionV2;

}

@property (nonatomic,copy) NSNumber * sparseAware;                                  //@synthesize sparseAware=_sparseAware - In the implementation block
@property (nonatomic,copy) NSNumber * shouldFetchAssetContent;                      //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,copy) NSNumber * shouldFetchAssetContentInMemory;              //@synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory - In the implementation block
@property (nonatomic,copy) NSNumber * useMMCSEncryptionV2;                          //@synthesize useMMCSEncryptionV2=_useMMCSEncryptionV2 - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)CKPropertiesDescription;
-(void)setUseMMCSEncryptionV2:(NSNumber *)arg1 ;
-(NSNumber *)sparseAware;
-(NSNumber *)shouldFetchAssetContent;
-(NSNumber *)shouldFetchAssetContentInMemory;
-(NSNumber *)useMMCSEncryptionV2;
-(void)setSparseAware:(NSNumber *)arg1 ;
-(void)setShouldFetchAssetContent:(NSNumber *)arg1 ;
-(void)setShouldFetchAssetContentInMemory:(NSNumber *)arg1 ;
@end

