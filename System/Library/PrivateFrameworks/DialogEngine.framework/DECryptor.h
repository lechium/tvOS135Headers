/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DialogEngine/DialogEngine-Structs.h>
#import <libobjc.A.dylib/DEWriter.h>

@protocol DEWriter;
@class NSObject;

@interface DECryptor : NSObject <DEWriter> {

	unsigned _operation;
	NSObject*<DEWriter> _writer;
	CCCryptorRef _cryptor;

}

@property (nonatomic,retain) NSObject*<DEWriter> writer;              //@synthesize writer=_writer - In the implementation block
@property (assign,nonatomic) CCCryptorRef cryptor;                    //@synthesize cryptor=_cryptor - In the implementation block
@property (assign,nonatomic) unsigned operation;                      //@synthesize operation=_operation - In the implementation block
-(id)init;
-(void)dealloc;
-(void)close;
-(unsigned)operation;
-(void)setOperation:(unsigned)arg1 ;
-(void)writeData:(id)arg1 ;
-(NSObject*<DEWriter>)writer;
-(void)setWriter:(NSObject*<DEWriter>)arg1 ;
-(CCCryptorRef)cryptor;
-(id)initWithWriter:(id)arg1 operation:(unsigned)arg2 key:(id)arg3 iv:(id)arg4 ;
-(void)setCryptor:(CCCryptorRef)arg1 ;
@end

