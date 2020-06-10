/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface CPLResourceIdentity : NSObject <NSSecureCoding, NSCopying> {

	BOOL _available;
	NSURL* _fileURL;
	NSString* _fingerPrint;
	unsigned long long _fileSize;
	NSString* _fileUTI;
	CGSize _imageDimensions;

}

@property (nonatomic,copy) NSURL * fileURL;                                  //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSString * fingerPrint;                           //@synthesize fingerPrint=_fingerPrint - In the implementation block
@property (assign,nonatomic) unsigned long long fileSize;                    //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) CGSize imageDimensions;                         //@synthesize imageDimensions=_imageDimensions - In the implementation block
@property (assign,getter=isAvailable,nonatomic) BOOL available;              //@synthesize available=_available - In the implementation block
@property (nonatomic,copy) NSString * fileUTI;                               //@synthesize fileUTI=_fileUTI - In the implementation block
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)fingerPrintForFileAtURL:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)fingerPrintForData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)fingerPrintForFD:(int)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)identityFromStoredIdentity:(id)arg1 ;
+(id)fileUTIForExtension:(id)arg1 ;
+(id)extensionForFileUTI:(id)arg1 ;
+(id)storageNameForFingerPrint:(id)arg1 fileUTI:(id)arg2 bucket:(id*)arg3 ;
+(id)identityForStorageName:(id)arg1 ;
+(void)setResourceIdentityImplementation:(Class)arg1 ;
+(Class)resourceIdentityImplementation;
+(Class)_identityImplementationClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)fileURL;
-(unsigned long long)fileSize;
-(void)setFileURL:(NSURL *)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(void)setAvailable:(BOOL)arg1 ;
-(BOOL)isAvailable;
-(void)setFileSize:(unsigned long long)arg1 ;
-(id)identityForStorage;
-(NSString *)fingerPrint;
-(void)setFingerPrint:(NSString *)arg1 ;
-(CGSize)imageDimensions;
-(void)setImageDimensions:(CGSize)arg1 ;
-(NSString *)fileUTI;
-(void)setFileUTI:(NSString *)arg1 ;
@end

