/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TXRTextureInfo, NSMutableArray;

@interface TXRDeferredTextureInfo : NSObject {

	TXRTextureInfo* _info;
	NSMutableArray* _mipmaps;

}

@property (nonatomic,retain) TXRTextureInfo * info;                   //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mipmaps;              //@synthesize mipmaps=_mipmaps - In the implementation block
-(TXRTextureInfo *)info;
-(void)setInfo:(TXRTextureInfo *)arg1 ;
-(id)initWithMipmapLevelCount:(unsigned long long)arg1 arrayLength:(unsigned long long)arg2 cubemap:(BOOL)arg3 ;
-(NSMutableArray *)mipmaps;
@end
