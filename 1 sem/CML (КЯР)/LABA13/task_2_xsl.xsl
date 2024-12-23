<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:output method="html" />
    <xsl:template match="/catalog">
        <html>
            <head>
                <link rel="stylesheet" href="css/second.css" />
            </head>
            <body>
                <table class="attestation">
                    <tr>
                        <th>Имя</th>
                        <th>Фамилия</th>
                        <th>Оценка</th>
                    </tr>
                    <xsl:for-each select="cd">
                        <xsl:sort select="grade" order="descending" /> 
                        <tr>
                            <td>
                                <xsl:value-of select="name" />
                            </td>
                            <td>
                                <xsl:value-of select="surname" />
                            </td>
                            <xsl:choose>
                                <xsl:when test="grade &lt; 4">
                                    <td style="background: red">
                                        <xsl:value-of select="grade" />
                                    </td>
                                </xsl:when>
                                <xsl:when test="grade &gt; 8">
                                    <td style="background: green">
                                        <xsl:value-of select="grade" />
                                    </td>
                                </xsl:when>
                                <xsl:otherwise>
                                    <td>
                                        <xsl:value-of select="grade" />
                                    </td>
                                </xsl:otherwise>
                            </xsl:choose>
                        </tr>
                    </xsl:for-each>
                </table>
            </body>
        </html>
    </xsl:template>
</xsl:stylesheet>