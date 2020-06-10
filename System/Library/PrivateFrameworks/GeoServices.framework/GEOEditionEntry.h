/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOEditionEntry : NSObject {

	unsigned _tileset;
	unsigned _edition;
	unsigned _provider;
	BOOL _invalidateOnly;

}

@property (assign,nonatomic) unsigned tileset;                 //@synthesize tileset=_tileset - In the implementation block
@property (assign,nonatomic) unsigned edition;                 //@synthesize edition=_edition - In the implementation block
@property (assign,nonatomic) unsigned provider;                //@synthesize provider=_provider - In the implementation block
@property (assign,nonatomic) BOOL invalidateOnly;              //@synthesize invalidateOnly=_invalidateOnly - In the implementation block
-(void)setProvider:(unsigned)arg1 ;
-(unsigned)provider;
-(unsigned)edition;
-(unsigned)tileset;
-(void)setTileset:(unsigned)arg1 ;
-(void)setEdition:(unsigned)arg1 ;
-(BOOL)invalidateOnly;
-(void)setInvalidateOnly:(BOOL)arg1 ;
@end
