/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSEventListenerObject.h>
#import <libobjc.A.dylib/IKJSDataSourceLoadIndexesRequest.h>
@class JSValue;


@protocol IKJSDataSourceLoadIndexesRequest <IKJSEventListenerObject,JSExport>
@property (nonatomic,__weak,readonly) JSValue * dataSource; 
@property (nonatomic,readonly) NSRange range; 
@required
-(NSRange)range;
-(JSValue *)dataSource;
-(void)close:(BOOL)arg1;

@end


@class JSValue, IKJSDataSource;

@interface IKJSDataSourceLoadIndexesRequest : IKJSEventListenerObject <IKJSDataSourceLoadIndexesRequest> {

	int _state;
	IKJSDataSource* _dataSource;
	/*^block*/id _completion;
	NSRange _range;

}

@property (nonatomic,copy) id completion;                                //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) BOOL isClosed; 
@property (nonatomic,__weak,readonly) JSValue * dataSource; 
@property (nonatomic,readonly) NSRange range;                            //@synthesize range=_range - In the implementation block
-(void)dealloc;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)cancel;
-(NSRange)range;
-(JSValue *)dataSource;
-(BOOL)isClosed;
-(void)close:(BOOL)arg1 ;
-(id)initWithDataSource:(id)arg1 range:(NSRange)arg2 ;
@end

