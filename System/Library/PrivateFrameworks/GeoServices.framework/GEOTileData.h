/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOXPCSerializable.h>

@class NSData, NSURL, NSString;

@interface GEOTileData : NSObject <GEOXPCSerializable> {

	NSData* _data;
	NSURL* _fileURL;
	unsigned long long _cachedFileSize;
	long long _sandboxExtension;
	id _decodedRepresentation;

}

@property (nonatomic,readonly) NSData * data;                          //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                        //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) id decodedRepresentation;               //@synthesize decodedRepresentation=_decodedRepresentation - In the implementation block
@property (nonatomic,readonly) unsigned long long length; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(NSURL *)fileURL;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(id)initWithDecodedRepresentation:(id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg1 ;
-(id)decodedRepresentation;
@end

