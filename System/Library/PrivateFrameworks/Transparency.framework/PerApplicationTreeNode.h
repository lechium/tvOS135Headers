/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>

@class SignedMapHead;

@interface PerApplicationTreeNode : GPBMessage

@property (nonatomic,retain) SignedMapHead * objectMapHead; 
@property (assign,nonatomic) BOOL hasObjectMapHead; 
@property (nonatomic,retain) SignedMapHead * revocationMapHead; 
@property (assign,nonatomic) BOOL hasRevocationMapHead; 
+(id)descriptor;
@end
