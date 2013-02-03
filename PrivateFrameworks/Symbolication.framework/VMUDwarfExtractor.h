/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class VMUMachOHeader, NSMutableDictionary, <VMUMemory>;

@interface VMUDwarfExtractor : VMUSymbolExtractor {
    NSMutableDictionary *_abbrevDicts;
    <VMUMemory> *_abbrevMem;
    VMUMachOHeader *_hdr;
    <VMUMemory> *_infoMem;
    <VMUMemory> *_lineMem;
    BOOL _shouldUseTaskBasedAddresses;
    <VMUMemory> *_strMem;
}

+ (unsigned long long)constantClassAttributeWithMemoryView:(id)arg1 form:(unsigned long long)arg2;
+ (id)dwarfExtractorWithMachOHeader:(id)arg1;

- (void)dealloc;
- (id)initWithMachOHeader:(id)arg1;
- (id)parseAbbrevDictionaryAtOffset:(NSUInteger)arg1;
- (void)parseCompilationUnitWithMemoryView:(id)arg1 withHeader:(id)arg2;
- (void)parseLineNumberMatrixAtOffset:(unsigned long long)arg1 withBaseDirectory:(id)arg2 withWordSize:(unsigned char)arg3;

@end
