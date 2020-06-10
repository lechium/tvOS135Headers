/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/VMUCallTreeNode.h>

@class NSCountedSet, NSString;

@interface VMUCallTreeLeafNode : VMUCallTreeNode {

	NSCountedSet* _addresses;
	NSString* _combinedName;

}
-(id)init;
-(void)addAddress:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned)arg3 numBytes:(unsigned long long)arg4 ;
-(void)getBrowserName:(id)arg1 ;
@end
