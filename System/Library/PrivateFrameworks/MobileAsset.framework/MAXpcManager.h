/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MAXpcManager : NSObject
-(void)dealloc;
-(id)initWithServiceName:(id)arg1 callbackQueue:(id)arg2 ;
-(id)sendSync:(id)arg1 ;
-(void)sendAsync:(id)arg1 clientHandler:(/*^block*/id)arg2 taskDescriptor:(id)arg3 ;
-(void)attachProgressHandler:(id)arg1 assetId:(id)arg2 callBack:(/*^block*/id)arg3 ;
-(void)setClientName:(id)arg1 ;
-(void)setClientConnectionHandler;
-(void)ensureConnection;
-(void)clearConnection:(id)arg1 ;
@end

