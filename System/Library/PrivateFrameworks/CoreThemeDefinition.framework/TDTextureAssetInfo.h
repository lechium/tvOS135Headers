/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface TDTextureAssetInfo : NSObject <NSCopying> {

	BOOL _flipped;
	NSURL* _fileURL;
	unsigned long long _mipLevel;
	long long _textureFace;

}

@property (nonatomic,copy) NSURL * fileURL;                            //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSURL * mipsURL; 
@property (assign,nonatomic) unsigned long long mipLevel;              //@synthesize mipLevel=_mipLevel - In the implementation block
@property (assign,nonatomic) long long textureFace;                    //@synthesize textureFace=_textureFace - In the implementation block
@property (assign,nonatomic) BOOL flipped;                             //@synthesize flipped=_flipped - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setFlipped:(BOOL)arg1 ;
-(BOOL)flipped;
-(unsigned long long)mipLevel;
-(long long)textureFace;
-(void)setMipLevel:(unsigned long long)arg1 ;
-(void)setTextureFace:(long long)arg1 ;
-(void)setMipsURL:(NSURL *)arg1 ;
-(NSURL *)mipsURL;
@end

