/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _GEOTileDBWriteOperation <NSObject>
@property (nonatomic,readonly) unsigned long long sizeInBytes; 
@required
-(unsigned long long)sizeInBytes;
-(void)performWithDB:(id)arg1;
-(BOOL)canIncreaseDataSizeInDB;
-(BOOL)isSupercededByOperation:(id)arg1;
-(id)dataForKey:(const GEOTileKey*)arg1 ETag:(id*)arg2 originalLoadReason:(unsigned char*)arg3 isKnownNotToExist:(BOOL*)arg4;

@end
